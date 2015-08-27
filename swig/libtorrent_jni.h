/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_libtorrent_WRAP_H_
#define SWIG_libtorrent_WRAP_H_

struct SwigDirector_swig_plugin : public swig_plugin, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_swig_plugin(JNIEnv *jenv);
    virtual ~SwigDirector_swig_plugin();
    virtual swig_torrent_plugin *new_torrent(libtorrent::torrent_handle const &t);
    virtual void added(libtorrent::session_handle s);
    virtual void register_dht_extensions(std::vector< std::pair< std::string,dht_extension_handler_listener * > > &dht_extensions);
    virtual void on_alert(libtorrent::alert const *a);
    virtual bool on_unknown_torrent(libtorrent::sha1_hash const &info_hash, libtorrent::peer_connection_handle const &pc, libtorrent::add_torrent_params &p);
    virtual void on_tick();
    virtual bool on_optimistic_unchoke(std::vector< libtorrent::peer_connection_handle > &peers);
    virtual void save_state(libtorrent::entry &e) const;
    virtual void load_state(libtorrent::bdecode_node const &n);
public:
    bool swig_overrides(int n) {
      return (n < 9 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<9> swig_override;
};

struct SwigDirector_swig_torrent_plugin : public swig_torrent_plugin, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_swig_torrent_plugin(JNIEnv *jenv);
    virtual ~SwigDirector_swig_torrent_plugin();
    virtual swig_peer_plugin *new_peer_connection(libtorrent::peer_connection_handle const &pc);
    virtual void on_piece_pass(int index);
    virtual void on_piece_failed(int index);
    virtual void tick();
    virtual bool on_pause();
    virtual bool on_resume();
    virtual void on_files_checked();
    virtual void on_state(int s);
    virtual void on_unload();
    virtual void on_load();
    virtual void on_add_peer(tcp::endpoint const &endp, int src, int flags);
public:
    bool swig_overrides(int n) {
      return (n < 11 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<11> swig_override;
};

struct SwigDirector_swig_peer_plugin : public swig_peer_plugin, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_swig_peer_plugin(JNIEnv *jenv);
    virtual ~SwigDirector_swig_peer_plugin();
    virtual char const *type() const;
    virtual void add_handshake(libtorrent::entry &e);
    virtual void on_disconnect(boost::system::error_code const &ec);
    virtual void on_connected();
    virtual bool on_handshake(char const *reserved_bits);
    virtual bool on_extension_handshake(libtorrent::bdecode_node const &n);
    virtual bool on_choke();
    virtual bool on_unchoke();
    virtual bool on_interested();
    virtual bool on_not_interested();
    virtual bool on_have(int index);
    virtual bool on_dont_have(int index);
    virtual bool on_bitfield(libtorrent::bitfield const &bitfield);
    virtual bool on_have_all();
    virtual bool on_have_none();
    virtual bool on_allowed_fast(int index);
    virtual bool on_request(libtorrent::peer_request const &r);
    virtual bool on_piece(libtorrent::peer_request const &piece, libtorrent::disk_buffer_holder &data);
    virtual bool on_cancel(libtorrent::peer_request const &r);
    virtual bool on_reject(libtorrent::peer_request const &r);
    virtual bool on_suggest(int index);
    virtual void sent_unchoke();
    virtual void sent_payload(int bytes);
    virtual bool can_disconnect(boost::system::error_code const &ec);
    virtual void on_piece_pass(int index);
    virtual void on_piece_failed(int index);
    virtual void tick();
    virtual bool write_request(libtorrent::peer_request const &r);
public:
    bool swig_overrides(int n) {
      return (n < 28 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<28> swig_override;
};

class SwigDirector_add_files_listener : public add_files_listener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_add_files_listener(JNIEnv *jenv);
    virtual ~SwigDirector_add_files_listener();
    virtual bool pred(std::string const &id, std::string const &p);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_set_piece_hashes_listener : public set_piece_hashes_listener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_set_piece_hashes_listener(JNIEnv *jenv);
    virtual ~SwigDirector_set_piece_hashes_listener();
    virtual void progress(std::string const &id, int num_pieces, int i);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};

class SwigDirector_dht_extension_handler_listener : public dht_extension_handler_listener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_dht_extension_handler_listener(JNIEnv *jenv);
    virtual ~SwigDirector_dht_extension_handler_listener();
    virtual bool on_message(udp::endpoint const &source, libtorrent::bdecode_node const &request, libtorrent::entry &response);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<1> swig_override;
};


#endif
