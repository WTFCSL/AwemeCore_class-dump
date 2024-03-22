//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWECreateSubAccountViewConfig : NSObject {
    double _headerHeight;
    double _bottomOffset;
    AWEURLModel *_avatarUrlModel;
    NSString *_titleContent;
    NSString *_subTitleContent;
    double _btnTop;
    double _btnDistance;
    double _btnLeft;
    NSString *_addBtnContent;
    NSString *_createBtnContent;
    long long _layoutStyle;
    long long _viewStyle;
}

@property (nonatomic) double headerHeight;
@property (nonatomic) double bottomOffset;
@property (retain, nonatomic) AWEURLModel *avatarUrlModel;
@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subTitleContent;
@property (nonatomic) double btnTop;
@property (nonatomic) double btnDistance;
@property (nonatomic) double btnLeft;
@property (copy, nonatomic) NSString *addBtnContent;
@property (copy, nonatomic) NSString *createBtnContent;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long viewStyle;

- (double)btnDistance;
- (double)btnTop;
- (id)avatarUrlModel;
- (id)subTitleContent;
- (id)addBtnContent;
- (id)createBtnContent;
- (double)btnLeft;
- (void)setAvatarUrlModel:(id)arg0;
- (void)setSubTitleContent:(id)arg0;
- (void)setBtnTop:(double)arg0;
- (void)setBtnDistance:(double)arg0;
- (void)setBtnLeft:(double)arg0;
- (void)setAddBtnContent:(id)arg0;
- (void)setCreateBtnContent:(id)arg0;
- (long long)layoutStyle;
- (void)setLayoutStyle:(long long)arg0;
- (void).cxx_destruct;
- (long long)viewStyle;
- (double)headerHeight;
- (void)setTitleContent:(id)arg0;
- (void)setViewStyle:(long long)arg0;
- (id)titleContent;
- (void)setHeaderHeight:(double)arg0;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg0;
- (id)initWithViewStyle:(long long)arg0;

@end