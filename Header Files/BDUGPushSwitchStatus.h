//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDUGPushSwitchStatus : NSObject {
    NSString *_switchName;
    long long _isClosed;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *switchName;
@property (nonatomic) long long isClosed;
@property (copy, nonatomic) NSDictionary *extra;

- (void)setExtra:(id)arg0;
- (void)mapFromJSON:(id)arg0;
- (id)switchName;
- (void)setSwitchName:(id)arg0;
- (long long)isClosed;
- (id)initWithJSON:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (void)setIsClosed:(long long)arg0;

@end
