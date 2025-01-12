//
//     Generated by private class-dump
//

@class NSString, AWEECEnterMallConfigModel, NSDictionary;

@interface AWEECJumpTabInfo : MTLModel <MTLJSONSerializing, NSCopying> {
    BOOL _supportTab;
    BOOL _supportSlide;
    NSString *_itemId;
    NSString *_title;
    NSString *_text;
    NSString *_jumpURL;
    AWEECEnterMallConfigModel *_guideConfig;
    AWEECEnterMallConfigModel *_slideConfig;
    NSDictionary *_logExtra;
}

@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL supportTab;
@property (nonatomic) BOOL supportSlide;
@property (retain, nonatomic) AWEECEnterMallConfigModel *guideConfig;
@property (retain, nonatomic) AWEECEnterMallConfigModel *slideConfig;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (id)guideConfig;
- (void)setGuideConfig:(id)arg0;
- (BOOL)supportTab;
- (BOOL)supportSlide;
- (id)slideConfig;
- (void)setSupportTab:(BOOL)arg0;
- (void)setSupportSlide:(BOOL)arg0;
- (void)setSlideConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)title;
- (id)text;
- (void)setTitle:(id)arg0;
- (id)itemId;
- (void)setItemId:(id)arg0;

@end
