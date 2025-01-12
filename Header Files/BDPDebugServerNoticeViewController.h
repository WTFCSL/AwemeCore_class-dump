//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;
@protocol BDPDebugServerNoticeViewDelegate;

@interface BDPDebugServerNoticeViewController : UIViewController {
    id<BDPDebugServerNoticeViewDelegate> _delegate;
    NSString *_developerName;
    NSString *_appId;
    NSString *_typeStr;
    NSString *_server;
    UIButton *_button;
    UILabel *_text1;
    UILabel *_text2;
    UILabel *_text3;
    UIImageView *_imageView;
}

@property (copy, nonatomic) NSString *developerName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *typeStr;
@property (copy, nonatomic) NSString *server;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *text1;
@property (retain, nonatomic) UILabel *text2;
@property (retain, nonatomic) UILabel *text3;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<BDPDebugServerNoticeViewDelegate> delegate;

- (void)setTypeStr:(id)arg0;
- (void)onBackButtonClicked;
- (id)text1;
- (id)text2;
- (id)text3;
- (void)onButtonClicked;
- (void)setMessageLabelAlignmentLeftWithView:(id)arg0;
- (id)initWithAppId:(id)arg0 type:(id)arg1 server:(id)arg2 developerName:(id)arg3;
- (void)setText1:(id)arg0;
- (void)setText2:(id)arg0;
- (void)setText3:(id)arg0;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)button;
- (id)typeStr;
- (void)setButton:(id)arg0;
- (id)imageView;
- (void)setServer:(id)arg0;
- (id)server;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)appId;
- (void)viewDidLoad;
- (id)developerName;
- (void)setDeveloperName:(id)arg0;

@end
