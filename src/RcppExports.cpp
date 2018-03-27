// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "crafter_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// load_pcap
pcapptr load_pcap(std::string capture_file, std::string filter);
RcppExport SEXP _crafter_load_pcap(SEXP capture_fileSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type capture_file(capture_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(load_pcap(capture_file, filter));
    return rcpp_result_gen;
END_RCPP
}
// num_packets
int num_packets(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP _crafter_num_packets(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    rcpp_result_gen = Rcpp::wrap(num_packets(pcap));
    return rcpp_result_gen;
END_RCPP
}
// crafter_get_ips
std::vector<std::string> crafter_get_ips(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap, std::string src_or_dst);
RcppExport SEXP _crafter_crafter_get_ips(SEXP pcapSEXP, SEXP src_or_dstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    Rcpp::traits::input_parameter< std::string >::type src_or_dst(src_or_dstSEXP);
    rcpp_result_gen = Rcpp::wrap(crafter_get_ips(pcap, src_or_dst));
    return rcpp_result_gen;
END_RCPP
}
// get_icmp_layer
DataFrame get_icmp_layer(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP _crafter_get_icmp_layer(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    rcpp_result_gen = Rcpp::wrap(get_icmp_layer(pcap));
    return rcpp_result_gen;
END_RCPP
}
// get_packet_info
DataFrame get_packet_info(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP _crafter_get_packet_info(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    rcpp_result_gen = Rcpp::wrap(get_packet_info(pcap));
    return rcpp_result_gen;
END_RCPP
}
// get_ip_layer
DataFrame get_ip_layer(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP _crafter_get_ip_layer(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ip_layer(pcap));
    return rcpp_result_gen;
END_RCPP
}
// get_payload_for
CharacterVector get_payload_for(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap, int packet_num);
RcppExport SEXP _crafter_get_payload_for(SEXP pcapSEXP, SEXP packet_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    Rcpp::traits::input_parameter< int >::type packet_num(packet_numSEXP);
    rcpp_result_gen = Rcpp::wrap(get_payload_for(pcap, packet_num));
    return rcpp_result_gen;
END_RCPP
}
// get_tcp_layer
List get_tcp_layer(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP _crafter_get_tcp_layer(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    rcpp_result_gen = Rcpp::wrap(get_tcp_layer(pcap));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_crafter_load_pcap", (DL_FUNC) &_crafter_load_pcap, 2},
    {"_crafter_num_packets", (DL_FUNC) &_crafter_num_packets, 1},
    {"_crafter_crafter_get_ips", (DL_FUNC) &_crafter_crafter_get_ips, 2},
    {"_crafter_get_icmp_layer", (DL_FUNC) &_crafter_get_icmp_layer, 1},
    {"_crafter_get_packet_info", (DL_FUNC) &_crafter_get_packet_info, 1},
    {"_crafter_get_ip_layer", (DL_FUNC) &_crafter_get_ip_layer, 1},
    {"_crafter_get_payload_for", (DL_FUNC) &_crafter_get_payload_for, 2},
    {"_crafter_get_tcp_layer", (DL_FUNC) &_crafter_get_tcp_layer, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_crafter(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
