@echo off
REM Create the private repo and push. Run from the repo root.
gh repo create flareon13 --private --source=. --remote=origin --description "Flare-On 13 solutions (embargoed until 2026-10-24)"
