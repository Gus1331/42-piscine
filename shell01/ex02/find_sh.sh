find -type f \( -name '*.sh' \) | xargs -n 1 basename | rev | cut --complement -c 1-3 | rev
