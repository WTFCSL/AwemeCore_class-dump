//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface BUCloudCommandModel : NSObject {
    NSNumber *_commandId;
    NSString *_type;
    NSDictionary *_params;
}

@property (retain, nonatomic) NSNumber *commandId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;
- (id)type;
- (id)initWithDict:(id)arg0;
- (void)setType:(id)arg0;
- (id)params;
- (id)commandId;
- (void)setParams:(id)arg0;
- (void)setCommandId:(id)arg0;

@end
