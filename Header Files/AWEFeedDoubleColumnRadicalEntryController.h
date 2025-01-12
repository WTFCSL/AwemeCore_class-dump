//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEFeedDoubleColumnRadicalEntryController : AWEBaseController <AWEFeedControllerProtocol> {
    NSMutableDictionary *_appearTimeDict;
}

@property (retain, nonatomic) NSMutableDictionary *appearTimeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appearTimeDict;
- (void)setAppearTimeDict:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg0;

@end
