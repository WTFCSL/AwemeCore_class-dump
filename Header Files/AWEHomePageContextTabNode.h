//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEHomePageContextTabNode : NSObject {
    NSString *_tabId;
    long long _index;
    AWEHomePageContextTabNode *_selectedNode;
    NSMutableArray *_childNodes;
}

@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWEHomePageContextTabNode *selectedNode;
@property (retain, nonatomic) NSMutableArray *childNodes;

- (id)tabId;
- (void)setTabId:(id)arg0;
- (id)selectedNode;
- (void)setSelectedNode:(id)arg0;
- (BOOL)hasChildNodeWithTabId:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;
- (id)childNodes;
- (void)setChildNodes:(id)arg0;

@end