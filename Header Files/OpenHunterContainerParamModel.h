//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface OpenHunterContainerParamModel : NSObject {
    NSString *_schema;
    NSString *_serverData;
    NSDictionary *_clientData;
    NSDictionary *_popupConfig;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *serverData;
@property (copy, nonatomic) NSDictionary *clientData;
@property (copy, nonatomic) NSDictionary *popupConfig;

- (void)setServerData:(id)arg0;
- (id)serverData;
- (id)popupConfig;
- (void)setPopupConfig:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setClientData:(id)arg0;
- (id)clientData;
- (id)schema;

@end