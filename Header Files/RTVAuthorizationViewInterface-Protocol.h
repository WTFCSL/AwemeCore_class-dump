//
//     Generated by private class-dump
//

@class UILabel;
@protocol RTVAuthorizationViewDelegate;

@protocol RTVAuthorizationViewInterface <NSObject>

@property (retain, nonatomic) UILabel *tipsTitleLabel;
@property (weak, nonatomic) id<RTVAuthorizationViewDelegate> delegate;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)queryAuthorizationStatusWithType:(long long)arg0;
- (void)automaticRequestAuthorization;
- (void)updateTitle:(id)arg0 description:(id)arg1;
- (id)tipsTitleLabel;
- (void)setTipsTitleLabel:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)queryAuthorizationStatus;

@end
