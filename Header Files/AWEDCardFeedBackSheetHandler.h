//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDCardFeedBackSheetHandler : NSObject <AWENearbyFeedbackSheetDelegate> {
    id /* block */ _feedBackSheetDelegateBlock;
}

@property (copy, nonatomic) id /* block */ feedBackSheetDelegateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedbackSheet:(id)arg0 didClickItem:(id)arg1 atIndex:(long long)arg2;
- (id /* block */)feedBackSheetDelegateBlock;
- (void)setFeedBackSheetDelegateBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg0;

@end
