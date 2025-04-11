from build import dummy_module  # Attempt to import the module

def main():
    # This is a dummy function to ensure the module is imported correctly
    test_class = dummy_module.SmallClass(integer=1)
    test_class.publicMethod(integer=1)

if __name__ == "__main__":
    main()
    print("Module imported and function executed successfully.")