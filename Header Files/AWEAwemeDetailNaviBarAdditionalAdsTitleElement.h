//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEAwemeDetailNaviBarAdditionalAdsTitleElement : AWEAwemeDetailNaviBarBaseElement {
    UILabel *_positionLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *positionLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)updatePositionLabelText:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0 currentIndex:(long long)arg1 totalCount:(long long)arg2;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)positionLabel;
- (void)setPositionLabel:(id)arg0;

@end
