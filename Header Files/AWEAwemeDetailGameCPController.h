//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEAwemeDetailGameCPController : AWEAwemeNewDetailBaseController {
    NSMutableArray *_awemeModelArray;
}

@property (retain, nonatomic) NSMutableArray *awemeModelArray;

- (id)awemeModelWithIndexPath:(id)arg0;
- (void)setAwemeModelArray:(id)arg0;
- (id)awemeModelArray;
- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)destroyContainerIfNeedWithAwemeModel:(id)arg0;
- (void)createContainerIfNeedWithAwemeModel:(id)arg0 panelController:(id)arg1 interactionController:(id)arg2;
- (void)prepareGameInfoWithAwemeModel:(id)arg0 cell:(id)arg1;
- (void)beforeResestContainerWithAwemeModel:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
