//
//     Generated by private class-dump
//

@class NSString, NSArray, IESECImageModel, IESECActionDefine;

@interface IESECGoodsDetailLeftPanGuideModel : IESECBaseApiModel {
    NSString *_text;
    IESECActionDefine *_action;
    NSArray *_showEvents;
    IESECImageModel *_icon;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECActionDefine *action;
@property (retain, nonatomic) NSArray *showEvents;
@property (retain, nonatomic) IESECImageModel *icon;

+ (id)showEventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)showEvents;
- (void)setShowEvents:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (void)setIcon:(id)arg0;
- (id)text;

@end
