//
//     Generated by private class-dump
//

@class NSMapTable;

@interface SearchDynamicElementBridge : NSObject {
    NSMapTable *_searchDynamicElementTable;
    NSMapTable *_searchDynamicContainerTable;
}

@property (retain, nonatomic) NSMapTable *searchDynamicElementTable;
@property (retain, nonatomic) NSMapTable *searchDynamicContainerTable;

+ (id)shareInstance;

- (id)searchDynamicElementTable;
- (id)searchDynamicContainerTable;
- (void)registElementView:(id)arg0 withSessionID:(id)arg1;
- (void)registContainer:(id)arg0 withSessionID:(id)arg1;
- (id)containerWithSessionID:(id)arg0;
- (id)elementWithSessionID:(id)arg0;
- (void)setSearchDynamicElementTable:(id)arg0;
- (void)setSearchDynamicContainerTable:(id)arg0;
- (void).cxx_destruct;

@end