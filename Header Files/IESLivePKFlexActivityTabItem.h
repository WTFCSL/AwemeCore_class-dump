//
//     Generated by private class-dump
//

@class NSNumber, NSString, FlexActivity_SubTabConfig;

@interface IESLivePKFlexActivityTabItem : NSObject {
    BOOL _isClicked;
    BOOL _isAdaptBigLayout;
    NSNumber *_flexActivityID;
    unsigned long long _status;
    NSString *_title;
    NSString *_subTitle;
    FlexActivity_SubTabConfig *_customizeConfig;
}

@property (retain, nonatomic) NSNumber *flexActivityID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isClicked;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isAdaptBigLayout;
@property (copy, nonatomic) FlexActivity_SubTabConfig *customizeConfig;

- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg0;
- (id)flexActivityID;
- (void)setIsAdaptBigLayout:(BOOL)arg0;
- (void)setFlexActivityID:(id)arg0;
- (void)setCustomizeConfig:(id)arg0;
- (id)customizeConfig;
- (BOOL)isAdaptBigLayout;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)title;
- (void)setStatus:(unsigned long long)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
