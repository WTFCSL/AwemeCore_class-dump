//
//     Generated by private class-dump
//

@class HTSLiveImage;

@interface IESLiveDiggAnimationNode : NSObject {
    BOOL _isAnchor;
    HTSLiveImage *_avatarMedium;
    struct CGPoint { double x; double y; } _location;
}

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL isAnchor;

- (id)avatarMedium;
- (void)setIsAnchor:(BOOL)arg0;
- (void)setAvatarMedium:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (struct CGPoint { double x0; double x1; })location;
- (void)setLocation:(struct CGPoint { double x0; double x1; })arg0;

@end
