find -type f \( -name '*.sh' \) | sed -s "s/.sh//g" | xargs -n 1 basename
