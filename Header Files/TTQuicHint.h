//
//     Generated by private class-dump
//

@class NSString;

@interface TTQuicHint : NSObject {
    int _Port;
    int _AlterPort;
    NSString *_Host;
}

@property (copy, nonatomic) NSString *Host;
@property (nonatomic) int Port;
@property (nonatomic) int AlterPort;

- (id)Host;
- (int)AlterPort;
- (void)setAlterPort:(int)arg0;
- (void)setPort:(int)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (int)Port;

@end
