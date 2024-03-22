//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface BDPPhoneNumberDisplayView : UIView {
    UILabel *_phoneNumLabel;
    UIView *_tagContainer;
    UILabel *_tagLabel;
    UIView *_cutLine;
    UIImageView *_chosenIcon;
    NSString *_phoneNum;
    long long _phoneNumId;
}

@property (retain, nonatomic) UILabel *phoneNumLabel;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *cutLine;
@property (retain, nonatomic) UIImageView *chosenIcon;
@property (copy, nonatomic) NSString *phoneNum;
@property (nonatomic) long long phoneNumId;

- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)tagContainer;
- (void)setTagContainer:(id)arg0;
- (void)setupCutLine;
- (id)cutLine;
- (void)setCutLine:(id)arg0;
- (void)setPhoneNum:(id)arg0;
- (id)phoneNum;
- (void)setupPhoneNumLabel;
- (void)setupTag;
- (void)setupChosenIcon;
- (void)setChosenIcon:(id)arg0;
- (id)phoneNumLabel;
- (void)setPhoneNumLabel:(id)arg0;
- (id)chosenIcon;
- (long long)phoneNumId;
- (void)setPhoneNumId:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setPhoneNumber:(id)arg0;
- (void)setupUI;

@end