//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDUGPushSignalListenModel : NSObject {
    NSString *_signalName;
    unsigned long long _signalType;
    NSArray *_signalSceneArray;
}

@property (copy, nonatomic) NSString *signalName;
@property (nonatomic) unsigned long long signalType;
@property (copy, nonatomic) NSArray *signalSceneArray;

- (id)signalSceneArray;
- (void)setSignalSceneArray:(id)arg0;
- (void).cxx_destruct;
- (void)setSignalType:(unsigned long long)arg0;
- (unsigned long long)signalType;
- (id)signalName;
- (void)setSignalName:(id)arg0;

@end