//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileMentionTabItemModel : NSObject <AWEProfileTabItemProtocol> {
    BOOL showLock;
    BOOL showRedDot;
    unsigned long long count;
    NSString *title;
    NSString *redDotAccessibilityText;
    unsigned long long _tabType;
}

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) NSString *redDotAccessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showRedDot;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg0;
- (void)setShowRedDot:(BOOL)arg0;
- (id)redDotAccessibilityText;
- (void)setRedDotAccessibilityText:(id)arg0;
- (void)setCount:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)title;
- (unsigned long long)count;
- (void)setTitle:(id)arg0;
- (void)setShowLock:(BOOL)arg0;
- (BOOL)showLock;

@end