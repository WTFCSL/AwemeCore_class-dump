//
//     Generated by private class-dump
//

@class NSString;

@interface BDCLServiceModel : NSObject {
    NSString *_serviceType;
    NSString *_serviceId;
    NSString *_controlURL;
    NSString *_eventSubURL;
    NSString *_SCPDURL;
}

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *controlURL;
@property (copy, nonatomic) NSString *eventSubURL;
@property (copy, nonatomic) NSString *SCPDURL;

- (void)setControlURL:(id)arg0;
- (void)setEventSubURL:(id)arg0;
- (void)setSCPDURL:(id)arg0;
- (id)controlURL;
- (id)eventSubURL;
- (id)SCPDURL;
- (void).cxx_destruct;
- (id)serviceType;
- (void)setServiceType:(id)arg0;
- (void)setArray:(id)arg0;
- (void)setServiceId:(id)arg0;
- (id)serviceId;

@end