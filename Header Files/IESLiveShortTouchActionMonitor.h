//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveShortTouchActionMonitor : NSObject {
    id<IESLiveFullLinkMonitor> _innerMonitor;
    NSString *_enterFrom;
    NSString *_enterMethod;
}

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)didSetAttachingDIContext;
- (id)innerMonitor;
- (void)setInnerMonitor:(id)arg0;
- (id)initWithEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (void)reportEvent:(id)arg0 category:(id)arg1 metric:(id)arg2 extra:(id)arg3;
- (id)processReportAccessData:(id)arg0;
- (void).cxx_destruct;

@end