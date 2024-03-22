//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, NSMutableArray;

@interface HTSEventBuilder : NSObject {
    NSMutableArray *_eventAttributes;
    NSDictionary *_baseParams;
}

@property (readonly, nonatomic) NSDictionary *predefinedParams;
@property (readonly, nonatomic) NSArray *addedAttirbutes;

+ (id)builderWithParams:(id)arg0;

- (id)eventModule;
- (id)eventBelong;
- (id)eventPage;
- (void)addPredefinedParams:(id)arg0;
- (id)addedAttirbutes;
- (id)predefinedParams;
- (void)addAttributesFromRoom:(id)arg0;
- (id)currentThemeName;
- (void)addPayWallRoomAttributeFromRoom:(id)arg0;
- (void)addVIPPaidStreamAttributeFromRoom:(id)arg0;
- (void)addVoiceModeAttributeFromRoom:(id)arg0;
- (void)addFunctionTypeAttributeFromRoom:(id)arg0;
- (void)addLayoutTypeAttributeFromRoom:(id)arg0;
- (void)addPlaymodeAttributeFromRoom:(id)arg0;
- (void)addMatrixAttributeFromRoom:(id)arg0;
- (id)layoutTypeWithRoom:(id)arg0;
- (id)playmodesWithRoom:(id)arg0;
- (void)addLifeRoomAttributeFromRoom:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)eventType;
- (id)addAttribute:(id)arg0;
- (id /* block */)attribute;
- (id)build;
- (id)initWithParams:(id)arg0;
- (id)valueForAttribute:(id)arg0;
- (id)addAttribute:(id)arg0 value:(id)arg1;

@end
