//
//     Generated by private class-dump
//

@class UILabel, AWERadarSpringActivityConfigModel, UIView;

@interface AWERadarGroupEnterCommandLetterView : UIView {
    AWERadarSpringActivityConfigModel *_configModel;
    UILabel *_letter;
    UIView *_emptyView;
}

@property (retain, nonatomic) UILabel *letter;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) AWERadarSpringActivityConfigModel *configModel;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)p_setupUI;
- (id)letter;
- (void)displayEmptyView;
- (void)displayLetterLabel:(id)arg0;
- (void)setLetterInvalid;
- (void)setLetter:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;

@end