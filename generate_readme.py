import os
import re

# folders to exclude from scanning
exclude_folders = {".git", ".github", "__pycache__", ".vscode"}

# scan all subfolders automatically
folders = [
    f for f in os.listdir(".")
    if os.path.isdir(f) and f not in exclude_folders
]

total_count = 0

for folder in folders:
    files = []
    for dirpath, dirnames, filenames in os.walk(folder):
        for file in filenames:
            if file.endswith((".cpp", ".py", ".js")):
                files.append(os.path.join(dirpath, file))
    total_count += len(files)

print(f"Total problems solved: {total_count}")

# read existing README
with open("README.md", "r", encoding="utf-8") as f:
    content = f.read()

# replace progress badge text in README
new_content = re.sub(
    r"Problems%20Solved-\d+",
    f"Problems%20Solved-{total_count}",
    content
)

with open("README.md", "w", encoding="utf-8") as f:
    f.write(new_content)

print("README.md updated with new problem count.")
