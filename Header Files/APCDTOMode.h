//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface APCDTOMode : MTLModel <MTLJSONSerializing> {
    BOOL _subModeUiVisible;
    NSString *_currentMode;
    NSDictionary *_modeName;
    NSDictionary *_subModeIndicator;
    NSArray *_allowMode;
    NSArray *_blockMode;
}

@property (copy, nonatomic) NSString *currentMode;
@property (copy, nonatomic) NSDictionary *modeName;
@property (nonatomic) BOOL subModeUiVisible;
@property (copy, nonatomic) NSDictionary *subModeIndicator;
@property (copy, nonatomic) NSArray *allowMode;
@property (copy, nonatomic) NSArray *blockMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAllowMode:(id)arg0;
- (void)setBlockMode:(id)arg0;
- (void)setSubModeUiVisible:(BOOL)arg0;
- (BOOL)subModeUiVisible;
- (id)subModeIndicator;
- (void)setSubModeIndicator:(id)arg0;
- (id)allowMode;
- (id)blockMode;
- (void)syncToPublishViewModel:(id)arg0;
- (id)currentMode;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentMode:(id)arg0;
- (id)modeName;
- (void)setModeName:(id)arg0;

@end
