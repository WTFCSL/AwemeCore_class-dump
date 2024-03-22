//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEStorage;

@interface DYADirectLoginTicketPersistence : NSObject {
    NSMutableDictionary *_ticketDict;
}

@property (retain, nonatomic) NSMutableDictionary *ticketDict;
@property (readonly, nonatomic) AWEStorage *storage;

+ (id)sharedInstance;

- (id)loadTicketDict;
- (void)setTicketDict:(id)arg0;
- (id)ticketDict;
- (void)saveTicketDict;
- (void)setTicket:(id)arg0 withSecUserID:(id)arg1;
- (id)ticketWithSecUserID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;

@end
