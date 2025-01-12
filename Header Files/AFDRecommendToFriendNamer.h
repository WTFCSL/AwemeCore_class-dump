//
//     Generated by private class-dump
//

@class NSString;

@interface AFDRecommendToFriendNamer : NSObject <AFDRecommendToFriendNamerProtocol> {
    BOOL _enableGuideBubble;
    BOOL _settingsSynced;
    NSString *_replaceName;
    NSString *_afterText;
    NSString *_entranceName;
    NSString *_shareToDairyReplaceName;
    NSString *_shareToDairyOtherReplaceName;
    NSString *_shareToDairyEntranceName;
    NSString *_tabGuideBubbleText;
    NSString *_entranceLabelText;
    NSString *_guideBubbleText;
}

@property (copy, nonatomic) NSString *replaceName;
@property (copy, nonatomic) NSString *afterText;
@property (copy, nonatomic) NSString *entranceName;
@property (copy, nonatomic) NSString *shareToDairyReplaceName;
@property (copy, nonatomic) NSString *shareToDairyOtherReplaceName;
@property (copy, nonatomic) NSString *shareToDairyEntranceName;
@property (copy, nonatomic) NSString *tabGuideBubbleText;
@property (copy, nonatomic) NSString *entranceLabelText;
@property (nonatomic) BOOL enableGuideBubble;
@property (copy, nonatomic) NSString *guideBubbleText;
@property (nonatomic) BOOL settingsSynced;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)shareToDairyEntranceName;
- (id)replacedTextWithOriginalText:(id)arg0;
- (void)syncAllSettingsValueIfNeeded;
- (id)replacedShareToDairyTextWithOriginalText:(id)arg0;
- (id)replaceName;
- (id)shareToDairyReplaceName;
- (id)shareToDairyOtherReplaceName;
- (BOOL)enableGuideBubble;
- (id)entranceName;
- (BOOL)p_shouldShowGuideBubble;
- (id)guideBubbleText;
- (id)replacedOtherShareToDairyTextWithOriginalText:(id)arg0;
- (void)showGuideBubbleIfNeededWithType:(unsigned long long)arg0 targetView:(id)arg1;
- (id)tabGuideBubbleText;
- (id)entranceLabelText;
- (void)setReplaceName:(id)arg0;
- (id)afterText;
- (void)setAfterText:(id)arg0;
- (void)setEntranceName:(id)arg0;
- (void)setShareToDairyReplaceName:(id)arg0;
- (void)setShareToDairyOtherReplaceName:(id)arg0;
- (void)setShareToDairyEntranceName:(id)arg0;
- (void)setTabGuideBubbleText:(id)arg0;
- (void)setEntranceLabelText:(id)arg0;
- (void)setEnableGuideBubble:(BOOL)arg0;
- (void)setGuideBubbleText:(id)arg0;
- (BOOL)settingsSynced;
- (void)setSettingsSynced:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
