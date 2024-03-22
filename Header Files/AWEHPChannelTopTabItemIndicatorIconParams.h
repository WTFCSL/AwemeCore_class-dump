//
//     Generated by private class-dump
//

@class UIImage;

@interface AWEHPChannelTopTabItemIndicatorIconParams : NSObject <NSCopying> {
    BOOL _hidden;
    BOOL _rotation;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    long long _distance;
    long long _iconSize;
    long long _position;
    long long _iconColor;
}

@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *unselectedImage;
@property (nonatomic) long long distance;
@property (nonatomic) long long iconSize;
@property (nonatomic) long long position;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL rotation;
@property (nonatomic) long long iconColor;

- (long long)distance;
- (void)setIconSize:(long long)arg0;
- (long long)iconSize;
- (void)setDistance:(long long)arg0;
- (id)init;
- (void)setRotation:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)position;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isValidWithReason:(id *)arg0;
- (void)setPosition:(long long)arg0;
- (BOOL)isValid;
- (BOOL)rotation;
- (id)description;
- (void)setHidden:(BOOL)arg0;
- (BOOL)hidden;
- (void)setSelectedImage:(id)arg0;
- (id)selectedImage;
- (void)setUnselectedImage:(id)arg0;
- (id)unselectedImage;
- (long long)iconColor;
- (void)setIconColor:(long long)arg0;

@end
