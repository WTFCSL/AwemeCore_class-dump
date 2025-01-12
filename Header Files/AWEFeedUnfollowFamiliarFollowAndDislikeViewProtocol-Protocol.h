//
//     Generated by private class-dump
//

@class AFDButton, AWEButton, NSString, UIButton;
@protocol AFDFollowButtonProtocol;

@protocol AWEFeedUnfollowFamiliarFollowAndDislikeViewProtocol <NSObject>

@property (retain, nonatomic) AWEButton *disLikeBtn;
@property (retain, nonatomic) AWEButton *unfollowBtn;
@property (retain, nonatomic) AFDButton *greetBtn;
@property (retain, nonatomic) UIButton<AFDFollowButtonProtocol> *followBtn;
@property (copy, nonatomic) NSString *referString;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)followBtn;
- (void)setFollowBtn:(id)arg0;
- (void)setDisLikeBtn:(id)arg0;
- (void)setUnfollowBtn:(id)arg0;
- (id)unfollowBtn;
- (id)disLikeBtn;
- (void)setGreetBtn:(id)arg0;
- (id)greetBtn;
- (void)resetDisLikeBtnSize;
- (void)updateUnFollowButtonText:(id)arg0 icon:(id)arg1 isPrimaryColor:(BOOL)arg2;
- (void)updateDislikeButtonWithWhiteStyle:(BOOL)arg0;

@end
