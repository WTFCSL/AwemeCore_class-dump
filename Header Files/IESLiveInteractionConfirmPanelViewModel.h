//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface IESLiveInteractionConfirmPanelViewModel : NSObject {
    BOOL _isForCameraInvite;
    NSString *_title;
    NSString *_iconName;
    HTSLiveImage *_iconImage;
    id /* block */ _block;
    struct CGSize { double width; double height; } _iconSize;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL isForCameraInvite;
@property (copy, nonatomic) id /* block */ block;

- (id)userAvatarUrls;
- (void)setIsForCameraInvite:(BOOL)arg0;
- (BOOL)isForCameraInvite;
- (void)setIconSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)iconImage;
- (id)init;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id)title;
- (id)iconName;
- (void)setIconName:(id)arg0;
- (id /* block */)block;
- (void)setIconImage:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setUserAction:(id /* block */)arg0;

@end
