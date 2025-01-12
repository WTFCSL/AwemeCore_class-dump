//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface IESLiveCommonCastScreenGuideInfo : NSObject {
    BOOL _enable;
    NSString *_title;
    NSString *_detailInfo;
    NSString *_buttonTitle;
    id /* block */ _actionBlock;
    UIView *_container;
}

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailInfo;
@property (retain, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIView *container;

- (void)setDetailInfo:(id)arg0;
- (id)detailInfo;
- (id)container;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)title;
- (id)buttonTitle;
- (void)setEnable:(BOOL)arg0;
- (id /* block */)actionBlock;
- (void)setTitle:(id)arg0;
- (void)setButtonTitle:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;

@end
