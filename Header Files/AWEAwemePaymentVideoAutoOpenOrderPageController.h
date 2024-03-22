//
//     Generated by private class-dump
//

@class NSString, AWEPaymentEventHandler;

@interface AWEAwemePaymentVideoAutoOpenOrderPageController : AWEAwemeNewDetailBaseController {
    BOOL _hasShowOrderPage;
    AWEPaymentEventHandler *_eventHandler;
    NSString *_containerID;
    NSString *_currItemID;
}

@property (nonatomic) BOOL hasShowOrderPage;
@property (retain, nonatomic) AWEPaymentEventHandler *eventHandler;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *currItemID;

- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)setupEvent;
- (void)autoOpenOrderPage:(id)arg0 referString:(id)arg1;
- (id)currItemID;
- (void)setHasShowOrderPage:(BOOL)arg0;
- (BOOL)hasShowOrderPage;
- (void)setCurrItemID:(id)arg0;
- (id)eventHandler;
- (void)setContainerID:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (void)setEventHandler:(id)arg0;
- (void)viewDidLoad;

@end