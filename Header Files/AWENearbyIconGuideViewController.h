//
//     Generated by private class-dump
//

@class UIImageView, NSString;

@interface AWENearbyIconGuideViewController : UIViewController <AWENearbyGuideViewControllerProtocol> {
    BOOL _notShow;
    UIImageView *_iconImageView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL notShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowOnView;

- (void)showOnView:(id)arg0;
- (BOOL)notShow;
- (void)setNotShow:(BOOL)arg0;
- (void)__configUI;
- (void)__clickPlusIcon;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end
