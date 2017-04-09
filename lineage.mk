# Release name
PRODUCT_RELEASE_NAME := t0ltekor
# Boot animation
TARGET_SCREEN_HEIGHT := 1280
TARGET_SCREEN_WIDTH := 720

# Inherit device configuration
$(call inherit-product, device/samsung/t0ltekor/full_t0ltekor.mk)

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Device identifier. This must come after all inclusions
PRODUCT_DEVICE := t0ltekor
PRODUCT_NAME := lineage_t0ltekor
PRODUCT_BRAND := samsung
PRODUCT_MODEL := SHV-E250
PRODUCT_MANUFACTURER := samsung
