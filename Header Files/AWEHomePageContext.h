//
//     Generated by private class-dump
//

@class NSArray, AWEHomePageContextTabNode;

@interface AWEHomePageContext : NSObject {
    AWEHomePageContextTabNode *_rootTabNode;
    NSArray *_selectedTabIds;
}

@property (copy, nonatomic) NSArray *selectedTabIds;
@property (retain, nonatomic) AWEHomePageContextTabNode *rootTabNode;

- (id)selectedTabIds;
- (void)setRootTabNode:(id)arg0;
- (id)rootTabNode;
- (BOOL)isSelectedWithTabId:(id)arg0;
- (id)getTabNodeWithTabId:(id)arg0;
- (id)getTabNodeWithRootNode:(id)arg0 tabId:(id)arg1;
- (void)setSelectedTabIds:(id)arg0;
- (void).cxx_destruct;

@end