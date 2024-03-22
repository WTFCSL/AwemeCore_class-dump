//
//     Generated by private class-dump
//

@protocol CSPTracker, CSPLogger;

@interface CSPConfig : NSObject {
    id<CSPLogger> _logger;
    id<CSPTracker> _tracker;
}

@property (retain, nonatomic) id<CSPLogger> logger;
@property (retain, nonatomic) id<CSPTracker> tracker;

+ (void)registerLogger:(id)arg0;
+ (void)registerTracker:(id)arg0;
+ (id)sharedConfig;

- (id)logger;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setLogger:(id)arg0;

@end
