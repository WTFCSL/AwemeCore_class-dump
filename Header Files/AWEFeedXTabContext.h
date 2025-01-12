//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedXTabContext : NSObject {
    BOOL _isXTabSelected;
    BOOL _isTopTabSelected;
    BOOL _isTabBarSelected;
    NSString *_selectedTopTabId;
    NSString *_selectedXTabId;
    NSString *_selectedXTabRefer;
}

@property (copy, nonatomic) NSString *selectedTopTabId;
@property (copy, nonatomic) NSString *selectedXTabId;
@property (copy, nonatomic) NSString *selectedXTabRefer;
@property (nonatomic) BOOL isXTabSelected;
@property (nonatomic) BOOL isTopTabSelected;
@property (nonatomic) BOOL isTabBarSelected;

- (id)selectedTopTabId;
- (void)setSelectedTopTabId:(id)arg0;
- (BOOL)isTabBarSelected;
- (id)selectedXTabId;
- (void)setSelectedXTabId:(id)arg0;
- (id)selectedXTabRefer;
- (void)setSelectedXTabRefer:(id)arg0;
- (BOOL)isXTabSelected;
- (void)setIsXTabSelected:(BOOL)arg0;
- (BOOL)isTopTabSelected;
- (void)setIsTopTabSelected:(BOOL)arg0;
- (void)setIsTabBarSelected:(BOOL)arg0;
- (void).cxx_destruct;

@end
