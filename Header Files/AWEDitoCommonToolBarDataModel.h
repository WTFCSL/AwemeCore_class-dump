//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, AWEDitoCommonToolBarItemModel;

@interface AWEDitoCommonToolBarDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _shouldShowLine;
    NSString *_backGround;
    AWEDitoCommonToolBarItemModel *_title;
    NSArray *_leftContainer;
    NSArray *_rightContainer;
    NSString *_notFitStatusBar;
    NSDictionary *_bizParams;
}

@property (copy, nonatomic) NSString *backGround;
@property (retain, nonatomic) AWEDitoCommonToolBarItemModel *title;
@property (copy, nonatomic) NSArray *leftContainer;
@property (copy, nonatomic) NSArray *rightContainer;
@property (nonatomic) BOOL shouldShowLine;
@property (copy, nonatomic) NSString *notFitStatusBar;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftContainerJSONTransformer;
+ (id)rightContainerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)leftContainer;
- (id)rightContainer;
- (void)setRightContainer:(id)arg0;
- (void)setLeftContainer:(id)arg0;
- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (id)backGround;
- (void)setBackGround:(id)arg0;
- (BOOL)shouldShowLine;
- (void)setShouldShowLine:(BOOL)arg0;
- (id)notFitStatusBar;
- (void)setNotFitStatusBar:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end