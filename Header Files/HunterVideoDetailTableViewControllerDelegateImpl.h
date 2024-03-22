//
//     Generated by private class-dump
//

@class NSString, HunterBaseElement;

@interface HunterVideoDetailTableViewControllerDelegateImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate> {
    HunterBaseElement *_hunterElement;
    NSString *_containerID;
}

@property (retain, nonatomic) HunterBaseElement *hunterElement;
@property (copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerDidScroll:(id)arg0 currentAwemeModel:(id)arg1 targetIndex:(long long)arg2;
- (void)detailTableViewControllerWillScrollToPreviousItem:(id)arg0 currentAwemeModel:(id)arg1 targetIndex:(long long)arg2;
- (void)detailTableViewControllerWillScrollToNextItem:(id)arg0 currentAwemeModel:(id)arg1 targetIndex:(long long)arg2;
- (void)detailTableViewController:(id)arg0 didPauseDisplayingCellWithCurrentPlayingTime:(double)arg1;
- (void)detailTableViewController:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 model:(id)arg3;
- (void)detailTableViewController:(id)arg0 scrollDidEndAtIndexPath:(id)arg1 model:(id)arg2;
- (void)detailTableViewController:(id)arg0 refreshFooterDidShowAtIndex:(long long)arg1;
- (void)detailTableViewControllerWillDisappear:(id)arg0 currentAwemeModel:(id)arg1;
- (void)detailTableViewControllerDidDisappear:(id)arg0 currentAwemeModel:(id)arg1;
- (void)detailTableViewControllerWillAppear:(id)arg0 currentAwemeModel:(id)arg1;
- (void)detailTableViewControllerDidAppear:(id)arg0 currentAwemeModel:(id)arg1;
- (id)hunterElement;
- (id)initWithHunterElement:(id)arg0;
- (void)setHunterElement:(id)arg0;
- (id)init;
- (void)setContainerID:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;

@end