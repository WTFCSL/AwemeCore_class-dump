//
//     Generated by private class-dump
//

@protocol AWETableViewLifeCycle <NSObject>

@optional

- (void)scrollViewDidEndScroll:(id)arg0;
- (void)registerTableViewCell:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;

@end
