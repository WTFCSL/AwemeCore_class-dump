//
//     Generated by private class-dump
//

@class UILabel, NSMutableArray, UIView;
@protocol LSIMMessageRobotListCellVM;

@interface LSIMMessageRobotListCellView : LSIMChatDetailBaseCellView {
    UIView *_cardView;
    UILabel *_titleLabel;
    UIView *_seperatorView;
    NSMutableArray *_labelList;
}

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) NSMutableArray *labelList;
@property (retain, nonatomic) id<LSIMMessageRobotListCellVM> cellVM;

- (void)setupContainerView;
- (id)labelList;
- (id)createContentLabel;
- (void)contentLabelDidTapped:(id)arg0;
- (void)setLabelList:(id)arg0;
- (void)configWithCellVM:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg0;

@end
