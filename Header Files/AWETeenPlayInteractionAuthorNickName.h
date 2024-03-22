//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface AWETeenPlayInteractionAuthorNickName : AWETeenPlayInteractionBaseElement <AWEBaseElementProtocol> {
    UILabel *_authorName;
    UIView *_midDotView;
    UILabel *_createTimeLabel;
    UIView *_richContentIcon;
}

@property (retain, nonatomic) UILabel *authorName;
@property (retain, nonatomic) UIView *midDotView;
@property (retain, nonatomic) UILabel *createTimeLabel;
@property (retain, nonatomic) UIView *richContentIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTimeLabel;
- (void)setCreateTimeLabel:(id)arg0;
- (id)richContentIcon;
- (void)setRichContentIcon:(id)arg0;
- (id)midDotView;
- (void)onAuthorNameClicked;
- (void)p_RichContentIconClicked;
- (void)setMidDotView:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;
- (id)authorName;
- (void)setAuthorName:(id)arg0;

@end