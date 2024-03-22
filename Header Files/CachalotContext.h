//
//     Generated by private class-dump
//

@class NSString, CachalotMonitorContext, NSIndexPath;
@protocol CachalotMessageDeliverer;

@interface CachalotContext : NSObject <NSCopying> {
    NSString *_bizDomain;
    CachalotMonitorContext *_performanceMonitorContext;
    id<CachalotMessageDeliverer> _messageDeliverer;
    double _containerWidth;
    NSIndexPath *_indexPath;
}

@property (copy, nonatomic) NSString *bizDomain;
@property (retain, nonatomic) CachalotMonitorContext *performanceMonitorContext;
@property (weak, nonatomic) id<CachalotMessageDeliverer> messageDeliverer;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (id)bizDomain;
- (void)setBizDomain:(id)arg0;
- (id)performanceMonitorContext;
- (void)setPerformanceMonitorContext:(id)arg0;
- (id)messageDeliverer;
- (void)setMessageDeliverer:(id)arg0;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)indexPath;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end