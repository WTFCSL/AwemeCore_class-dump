//
//     Generated by private class-dump
//

@class UILabel, AWESettingSectionModel;

@interface AWEPrivacyOneKeyGuardHeaderFooterView : UITableViewHeaderFooterView {
    BOOL _isFooter;
    AWESettingSectionModel *_sectionModel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESettingSectionModel *sectionModel;
@property (nonatomic) BOOL isFooter;

+ (id)identifier;

- (id)sectionModel;
- (void)setSectionModel:(id)arg0;
- (void)setIsFooter:(BOOL)arg0;
- (BOOL)isFooter;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)initWithReuseIdentifier:(id)arg0;

@end
