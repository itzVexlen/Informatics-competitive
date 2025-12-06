import subprocess

def run_test_case(input_str):
    process = subprocess.Popen(['./dig.exe'], # assuming the compiled executable is named "dig.exe"
                             stdin=subprocess.PIPE,
                             stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE)
    stdout, stderr = process.communicate(input=input_str.encode())
    return stdout.decode().strip()

def main():
    test_cases = []
    with open('test_cases.txt', 'r') as f:
        for line in f:
            test_cases.append(line.strip().split())

    for case in test_cases:
        input_str = ' '.join(case[:-1])
        expected_output = case[-1]
        actual_output = run_test_case(input_str)

        if actual_output == expected_output:
            print(f"Test passed for input: {input_str}")
        else:
            print(f"Test failed for input: {input_str}")
            print(f"Expected: {expected_output}, Actual: {actual_output}")

if __name__ == "__main__":
    main()