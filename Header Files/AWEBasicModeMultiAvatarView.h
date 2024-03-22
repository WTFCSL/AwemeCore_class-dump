//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEBasicModeMultiAvatarView : UIView {
    NSArray *_avatarArray;
    double _avatarWidth;
    double _iconWidth;
}

@property (retain, nonatomic) NSArray *avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;

- (void)setAvatarArray:(id)arg0;
- (id)avatarArray;
- (id)addIconLayer;
- (void)configWithAvatarArray:(id)arg0 backgroundColor:(id)arg1 needCrop:(BOOL)arg2 avatarWidth:(double)arg3 needPlaceholder:(BOOL)arg4 needRoundRectBg:(BOOL)arg5;
- (double)multiAvatarViewWidth;
- (void).cxx_destruct;
- (double)iconWidth;
- (void)setIconWidth:(double)arg0;
- (double)avatarWidth;
- (void)setAvatarWidth:(double)arg0;

@end
