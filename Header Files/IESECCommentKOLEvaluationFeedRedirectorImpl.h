//
//     Generated by private class-dump
//

@class NSString;
@protocol IESECCommentKOLEvaluationFeedRedirectorDelegate;

@interface IESECCommentKOLEvaluationFeedRedirectorImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate, IESECCommentKOLEvaluationFeedRedirector> {
    id<IESECCommentKOLEvaluationFeedRedirectorDelegate> _delegate;
}

@property (weak, nonatomic) id<IESECCommentKOLEvaluationFeedRedirectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)arg0 scrollDidEndAtIndexPath:(id)arg1 model:(id)arg2;
- (void)openVideoFeedWithDataManager:(id)arg0 withCurrentIndex:(long long)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end